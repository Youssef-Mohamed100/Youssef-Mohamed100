# OSINT (Open Source Intelligence)

## What is OSINT?

OSINT (Open Source Intelligence) is the process of collecting information from publicly available sources without directly interacting with the target.

The goal of OSINT is to build a complete picture of the target organization before moving to active reconnaissance or vulnerability assessment.

---

## Information That Can Be Collected

OSINT can reveal valuable information about a target, including:

- Domains
- Subdomains
- IP Addresses
- CIDR Ranges
- ASN Information
- DNS Records
- Email Addresses
- Employee Information
- Technologies Used
- Cloud Assets
- Public Documents
- GitHub Repositories
- Mobile Applications
- Leaked Credentials
- Data Breaches
- Historical Information
- Public Exposures
- Security Incidents
- Website Changes
- Third-Party Relationships

---

## Why OSINT Matters

Good reconnaissance can help:

- Identify attack surface
- Discover forgotten assets
- Find exposed services
- Collect employee information for phishing simulations
- Detect leaked credentials
- Understand company infrastructure
- Map relationships between domains and organizations

---

# Common OSINT Resources

## Search Engines

### Google Dorks

Google Dorking uses advanced search operators to discover publicly exposed information.

Examples:

```bash
### Google Dorks

Google Dorking uses advanced search operators to discover publicly exposed information.

Examples:
site:example.com              - Limit search results to the target domain.
site:example.com filetype:pdf - Search for public PDF documents.
site:example.com inurl:admin  - Find exposed admin/login portals.
site:example.com ext:sql      - Look for exposed database backups or SQL files.
```

Useful for:

- Public documents
- Login pages
- Backup files
- Exposed directories

---


## Search & Intelligence Platforms

### Shodan

Search engine for internet-connected devices.

Can identify:

- Open ports
- Running services
- Technologies
- Server banners

Useful queries:

```bash
hostname:example.com
ssl:"example.com"
org:"Example Inc"
```

---

### Censys

Internet-wide scanning platform similar to Shodan.

Useful for:

- Certificate analysis
- Service discovery
- Asset identification

---

## Email & Employee Discovery

### theHarvester

Collects:

- Emails
- Subdomains
- Hosts
- Employee information

Example:

```bash
theHarvester -d example.com -b all
```

---

### Prospeo

Used for finding professional email addresses related to a company domain.

https://app.prospeo.io/domain-search

---

### AnyMailFinder

Email discovery platform.

https://newapp.anymailfinder.com/

---

### Snov.io

Provides:

- Email discovery
- Verification
- Company information

https://app.snov.io

---

## Data Breach Intelligence

### Have I Been Pwned

Checks whether emails appear in known breaches.

https://haveibeenpwned.com/

---

### DeHashed

Searches exposed credentials and breach data.

https://dehashed.com/

---

### SOCRadar

Provides cyber threat intelligence and exposure monitoring.

https://socradar.io/

---

## Domain Intelligence

### Whois

Provides:

- Domain registration information
- Registrar details
- Registration dates

https://whois.com/

---

### DNS Queries

Useful for DNS investigations.

https://www.dnsqueries.com/en/

Can reveal:

- A Records
- MX Records
- TXT Records
- Name Servers

---

## Business Intelligence

### Crunchbase

Provides company information such as:

- Acquisitions
- Employees
- Subsidiaries

https://www.crunchbase.com/

---

## Investigative Platforms

### Aleph (OCCRP)

Large investigative database containing public records and leaked datasets.

https://aleph.occrp.org/

---

## Defacement Monitoring

### Zone-H

Archive of website defacements.

Useful for:

- Historical compromises
- Previous attacks
- Security incidents

https://www.zone-h.org/archive/special=1

---

# To know the records of a domain, we use dig and nslookup in the terminal

# CNAME record (Canonical Name)
dig google.com CNAME

# MX record (Mail Exchange)
dig github.com MX

# Short output (clean result only)
dig +short github.com

# Alternative tool: nslookup examples

# Query all available DNS information
nslookup google.com

# Query specific record type (example: MX)
nslookup -type=MX github.com

---

# Notes

- OSINT is passive reconnaissance.
- Always respect the scope of engagement.
- Public information can reveal critical attack paths.
- Multiple data sources should be correlated before trusting results.
- Document all findings for future reconnaissance phases.
