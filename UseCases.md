‏1‏. الـ Actors‏ الأساسيين في TechBridge‏  

‏- [ ] الملفات محددة صراحة 4‎ User Roles‏ :

Student Mentor / Specialist Personal Monitor Admin

‏وفيه External Systems‏ مرتبطة بالمنصة، لكن دول مش User Actors‏ أساسيين :

GitHub Payment Gateway — TBD Google Meet

‏وفيه System‏ داخل بعض الـFRs‏، لكن ده مش Actor‏ في Use Case Diagram‏؛ ده System Boundary/behavior‏ داخلي.

2. Student

‏ده الـPrimary Actor‏ وأكبر Actor‏ في المنصة.

A. Account & Profile

‏Student‏ يقدر:

‏Register Build Profile Select Tech Track: Frontend Backend Cyber Security‏ استخدام المنصة حسب صلاحيات Student‏

‏بيانات التسجيل التفصيلية لكل Role‏ لسه TBD‏.

B. Programs

Student:

‏Discover Programs View available programs Apply to Program Withdraw Application‏ قبل القرار Receive Application Outcome‏ بعد القبول: Pay Enrollment Fee Become Enrolled Access Program Workspace‏

‏لو Payment‏ فشل → Enrollment‏ لا يتفعل.

C. Team

‏بعد Enrollment‏:

‏يدخل Team‏ يحصل على Team Role‏ يستقبل Team Assignment notification‏ يشارك مع باقي أعضاء الفريق

‏مهم: نوع الـRoles‏ داخل Team‏ غير محدد في الملفات.

3. Student → Project / Agile Simulation

‏هنا الجزء الأساسي في TechBridge‏.

‏Student‏ يشارك في:

Project Workspace Access Project Workspace View/manage Tasks Work with: Epics Stories Tasks Issues Deadlines Status Simulated Client

‏Student‏ يستقبل:

Scripted Project Scenario Client Requirements

‏والـClient‏ هنا Mentor‏ نفسه في V1‏.

Product Backlog

‏Student‏ يشارك في:

Epic → Story → Task

‏ويحوّل Requirements‏ إلى Work Items‏.

Sprint Planning

‏Student‏ يشارك في:

Sprint Planning Select Backlog Items Set Sprint Goal Assign Work Record Sprint Duration Sprint Board

‏Student‏ يعمل على Board‏:

To Do → In Progress → Code Review → Testing → Done

‏ويقدر يعمل Manual Task Moves‏.

‏لكن GitHub‏ ممكن يحرّك Task‏ تلقائياً.

Task Dependencies

Student:

‏يحدد Task‏ إنها Blocked‏ يربطها بـTask‏ أخرى يشوف Dependency‏ يستقبل Notifications‏ المتعلقة بها Blocker Reporting‏

Student:

‏Report Blocker‏ يكتب Impact Description‏ يحدد Related Task Mentor‏ يشوف الـBlocker Daily Standup‏

‏Student‏ يرسل Async Standup‏:

Yesterday Today Blockers

‏لكل Active Sprint Day‏.

‏هل Mandatory؟ TBD‏.

4. Student → GitHub

‏Student‏ يستخدم GitHub Account‏ بتاعه هو.

‏يقدر:

Link GitHub Account Work on own Repository Create Branch Push Code Open Pull Request Merge PR

‏TechBridge‏ يستقبل GitHub Webhooks‏.

‏الـautomatic flow‏:

Branch Created ↓ Task → In Progress

PR Opened ↓ Task → Code Review

PR Merged ↓ Task → Done

‏Student‏ يشوف داخل TechBridge‏:

PR Title PR Status Branch Linked Task Diff Link PR information 5\. Student → Code Review

Student:

‏يستقبل Mentor Feedback‏ يشوف Approve / Request Changes‏ لو Request Changes‏: يعدل Code Push Mentor‏ يعيد Review‏ لو Approve: Merge PR Task‏ تصبح Done 6\. Student → Sprint Review‏

‏Student‏ يشارك في:

‏Sprint Review‏ يشوف Client Feedback‏ يستقبل Comments‏ يستقبل Approval Status New Feature Requests‏ تتحول تلقائياً إلى Backlog Items‏

‏الـClient‏ هنا:

Mentor acting as Simulated Client

7. Student → Sprint Retrospective

‏Student‏ يشارك في:

What Went Well What Went Wrong What To Improve Action Items

‏والـAction Items‏ تنتقل للـNext Sprint‏ كتذكيرات ظاهرة.

‏هل كل عضو لازم يشارك منفرداً أم Mentor‏ يمثل الفريق؟ TBD‏.

8. Student → Monitor Marketplace

‏Student‏ عنده مسارين:

‏Personal Monitor Request Personal Monitor System‏ يعرض/matches available Monitor Select Monitor Confirm relationship/booking‏

‏آلية Matching‏ نفسها TBD / Assumption‏.

Marketplace

Student:

Browse Monitors View Services Select Service Book Service Pay Booking becomes active after payment confirmation

‏الخدمات ممكن تكون:

Session Review Follow-up Package Task Help 9\. Student → Monitor Sessions

Student:

Attend Monitor Session Participate in Development Plan Access permitted Notes Receive Reminders Use Monitor–Student Communication

‏Private Monitor Notes/Messages‏ لا تظهر إلا حسب Student permission‏.

10. Student → Payments

Student:

Pay Program Enrollment Pay Monitor Booking Pay Subscription

‏Subscription‏ ممكن تكون مثلاً:

Monthly Monitor Follow-up

‏Payment Gateway‏ نفسه لسه TBD‏.

11. Student → Communication

‏Student‏ يستخدم:

Native Team Chat Send Messages Receive Messages File Attachments Link Attachments Code Snippets @Mentions

‏Chat‏ موجود داخل TechBridge‏، مش Third-party Chat‏.

Notifications

‏Student‏ يستقبل Notifications‏ عن:

‏Application Outcome Mentor Feedback Team Assignment Booking Confirmation Payment Confirmation Certificate Chat Messages‏ وغيرها من الأحداث ذات الصلة

Channels:

TBD

12. Student → Meetings

Student:

Participate in Meeting View Meeting Details View: Meeting Type Date Time Duration Participants Google Meet Link Join Google Meet Access Meeting Notes/Decisions

‏Meeting Types‏ تشمل:

Sprint Planning Daily Scrum Sprint Review Retrospective Mentor Session Ad-hoc

‏Video‏ نفسه خارج TechBridge‏ في V1‏ عن طريق Google Meet‏.

13. Student → Portfolio & Certificate

Student:

‏View Verifiable Portfolio Generate/View Experience Record Portfolio‏ يحتوي على: Program Participation Roles Technologies GitHub Contributions Mentor Evaluations‏

‏ويحصل على:

Certificate

‏لكن فقط بعد:

Program Completion \+ Mentor Evaluation ↓ Certificate

‏Completion Criteria‏ نفسها TBD‏.

14. Student → Rating

Student:

Rate Mentor Rate Personal Monitor 15\. Student → RAG Chatbot

‏Student‏ يقدر:

‏Ask Platform Questions Receive answers‏ من Platform Documentation / Knowledge Base‏

‏RAG scope‏ نفسه لسه فيه Open Question‏:

‏هل Knowledge Base \= Platform Docs/FAQ‏ فقط أم Track Learning Material‏ كمان.

16. Mentor / Specialist

‏Mentor‏ هو Actor‏ مهم جداً، لأنه في V1‏ عنده دورين:

Mentor ├── Mentor └── Simulated Client

‏وكمان Mentor‏ هو الـScrum Master‏ في V1‏.

‏لا يوجد Separate Scrum Master Actor‏.

‏Mentor → Account Register Build Mentor Account‏ انتظار Admin Approval‏ يصبح Active‏ بعد Approval Mentor → Programs‏

Mentor:

Create Program Manage Program Define Simulated Project Scenario Manage Program Content/Setup Supervise Program

‏Program Approval Workflow‏ فيه جزء غير محسوم بالكامل.

Mentor → Teams

Mentor:

Supervise Teams Assign Students to Teams Assign Team Roles Reassign Students Manage Team Project

‏Team Formation trigger‏ نفسه Assumption/TBD‏.

17. Mentor → Agile

‏Mentor‏ يعمل تقريباً على كامل دورة الـAgile‏:

Backlog Manage Epics Manage Stories Manage Tasks Sprint Facilitate Sprint Planning Set/Manage Sprint Goal Assign Work Manage Sprint Duration Board Monitor Sprint Board Manually Move Tasks Dependencies Monitor Blocked Tasks Monitor Dependencies Blockers View Student Blockers Daily Scrum Facilitate/Monitor Daily Standup Sprint Review

‏Mentor‏ هنا يتحول إلى:

Simulated Client

‏ويعمل:

Conduct Sprint Review Submit Client Feedback Set Approval Status Add Comments Submit New Feature Requests

‏والـNew Requests → Backlog‏.

Retrospective

Mentor:

Facilitate Retrospective Review: What Went Well What Went Wrong What To Improve Manage Action Items 18\. Mentor → GitHub

Mentor:

Link Project Repository View GitHub-driven Task Status View PR Data View Branch View PR/Diff Link Monitor GitHub Workflow

GitHub webhook:

Branch → In Progress PR → Code Review Merge → Done 19\. Mentor → Code Review

Mentor:

Open PR Review Code Write Feedback Add Inline Comments Add Overall Comment Approve Request Changes Re-review after fixes

‏والـReview Record‏ الأساسي موجود داخل TechBridge‏ وليس GitHub‏.

20. Mentor → Student Evaluation

Mentor:

Evaluate Student Store Evaluation Evaluation feeds: Portfolio Certificate 21\. Mentor → Meetings

‏Mentor‏ ينشئ Meeting Record‏:

Meeting Type Date Time Duration Participants Google Meet URL

‏ويكتب:

Meeting Notes Decisions

‏ويربط Meeting‏ بالـSprint‏.

22. Mentor → Chat / Notifications

Mentor:

Team Chat Mentor–Student Chat Send/Receive: Text Files Links Code Snippets @Mentions

‏ويستقبل Notifications‏.

23. Mentor → Dashboard

‏Mentor Dashboard‏ يعرض/يدير:

Programs Teams Pending Reviews Evaluations Related management functions 24\. Mentor → Rating

Mentor:

‏يُقيّم بواسطة Students Admin‏ يراجع جودة Mentor 25\. Mentor → RAG‏

‏حسب FRS‏:

‏يستخدم RAG Chatbot‏ يسأل عن Platform‏ يحصل على Knowledge-Base-grounded answers‏

‏لكن الوصول للـRAG‏ من Mentor‏ مبني على Assumption‏ لأن BRS‏ لم يقيده.

26. Personal Monitor

‏مختلف عن Mentor‏ تماماً.

Mentor \= Program/Project supervision

Monitor \= Paid personal follow-up / consultation

‏Monitor → Account Register Build Account‏ انتظار Admin Approval‏ يصبح Live‏ بعد Approval Monitor → Services‏

Monitor:

Create Service Listing Define Service Type Set Price Set Availability Edit Service Remove Service

Service types:

Session Hourly Package Monthly Follow-up

‏والـlisting‏ لا يصبح Live‏ قبل Admin Approval‏.

27. Monitor → Bookings

Monitor:

View Bookings Accept/Deliver Bookings Deliver Sessions Deliver Follow-up Packages 28\. Monitor → Student Development

Monitor:

Conduct Sessions Maintain Development Plan Add Notes Add Reminders

‏لكن:

Private Notes/Messages → Student Permission required.

29. Monitor → Payments

Monitor:

Wait for Service Delivery Receive Payout

Payment flow:

Student Pays ↓ Platform Holds Money ↓ Monitor Delivers Service ↓ Completion ↓ Split Payment ↓ Monitor Payout \+ Platform Commission

‏لو Dispute‏:

Payout ↓ Hold ↓ Admin Resolution ↓ Final Payout Decision 30\. Monitor → Dispute

Monitor:

File Dispute Participate in Dispute Process Receive Dispute Outcome

‏Admin‏ هو اللي يحل النزاع.

Resolution mechanics:

Release Withhold Partial Release

‏لكن التفاصيل نفسها TBD‏.

31. Monitor → Dashboard

Monitor Dashboard:

Service Listings Upcoming Bookings Past Bookings Session Notes Payout Status 32\. Monitor → Chat / Meetings / Notifications

Monitor:

Chat with Student Send/Receive Messages Attach Files/Links Code Snippets @Mentions Participate in Monitor Sessions Participate in Meetings Receive Notifications 33\. Monitor → Rating

Monitor:

‏يُقيّم بواسطة Student Admin‏ يراجع Quality 34\. Monitor → RAG‏

‏حسب FRS‏:

‏يستخدم RAG Chatbot Platform/Knowledge Base Q\&A‏

‏وده أيضاً مبني على Assumption‏.

35. Admin

‏Admin‏ هو Platform Operator‏.

Admin → Approvals

Admin:

Review Mentor Applications Approve Mentor Reject Mentor Review Monitor Applications Approve Monitor Reject Monitor

‏Mentor/Monitor‏ لا يصبح Live‏ قبل Approval‏.

Admin → Programs

Admin:

‏Create/manage Programs Manage Program data Approval/management‏ حسب النظام

‏لكن:

‏Program-level approval workflow‏ نفسه غير محسوم بالكامل.

36. Admin → Users

Admin:

Manage Users Platform-wide user management Apply Role-Based Access Enforce Privacy Controls 37\. Admin → Payments

Admin:

View Payments Manage Payment-related platform data Configure Monitor Commission Change Commission Percentage Monitor Payment Splits

‏Commission value‏ نفسها TBD‏.

38. Admin → Monitor Marketplace

Admin:

Approve Monitor Manage Commission % Review Monitor Quality Handle Disputes Finalize dispute-related payout status 39\. Admin → Quality

Admin:

Review Mentor Ratings Review Monitor Ratings Review Quality Signals Perform Quality Review

‏Specific quality actions‏ نفسها TBD‏.

40. Admin → Dashboard / Reports

Admin Dashboard:

Users Programs Payments Quality Reports

Reports details:

Filters → TBD Export → TBD 41\. Admin → Notifications

‏Admin‏ داخل FRS Actor‏ في Notifications‏، لكن الملفات لا تعطيه مجموعة Notifications‏ تفصيلية مثل Student/Monitor‏.

‏المؤكد:

‏Admin‏ له access‏ للمنصة وإدارة وظائفه Notifications module‏ موجود القنوات نفسها TBD 42\. Admin → Access / Privacy‏

‏Admin‏ مسؤول Platform-level‏ عن:

RBAC Privacy Controls Permissions Role restrictions 43\. Admin → RAG

‏هنا لازم نكون دقيقين:

‏FRS‏ لا يضع Admin‏ ضمن Actor‏ الخاص بالـRAG Chatbot‏.

‏الـFRS‏ يقول:

Student, Mentor, Personal Monitor

‏فبالتالي ما نحطش Admin → RAG‏ في Use Case Diagram‏ طالما المصدر الوحيد هو الملفات.

44. External Actor: GitHub

‏ده مش User Role‏، لكنه External System‏ مرتبط بالمنصة.

‏GitHub‏ يتفاعل مع TechBridge‏ عن طريق:

Webhooks

‏يرسل:

push pull\_request

‏وبالتالي:

GitHub ↓ webhook TechBridge ↓ Update Task Status

‏الأحداث:

Branch Created → In Progress PR Opened      → Code Review PR Merged      → Done

‏TechBridge‏ أيضاً يستخدم GitHub API‏ لـ:

Register Webhook Delete Webhook Fetch PR Metadata Fetch Diff Link

‏والـWebhook‏ لازم يتحقق من:

X-Hub-Signature-256

45. External Actor: Payment Gateway

‏الـPayment Gateway‏ موجود كـExternal Integration‏.

‏لكن اسمه TBD‏.

‏Candidates‏ المذكورة في الملفات:

Paymob Fawry

‏لكن ولا واحد finalized‏.

‏وظيفته:

Process Enrollment Payment Process Monitor Booking Payment Process Subscription Payment Return Payment Confirmation / Failure

Payment Success:

Payment Confirmed → Enrollment/Booking Activated

Payment Failure:

Payment Failed → Enrollment/Booking NOT Activated 46\. External Actor: Google Meet

‏Google Meet‏ موجود كـExternal Video System‏.

TechBridge:

Creates Meeting Record Stores Google Meet URL

User:

Clicks Link Goes to Google Meet

‏TechBridge‏ لا يعمل Video Call‏ في V1‏.

‏ولا يوجد Google API integration‏ حسب FRS‏؛ مجرد URL stored‏ داخل Meeting Record‏.

‏47‎. Actors‏ لا نحطهم في V1‏

‏الملفات صريحة:

Universities

‏Future Partner‏ فقط.

Companies

‏Future Partner‏ فقط.

Government Bodies

‏Future Partner‏ فقط.

‏لذلك:

‏مش Actors‏ في Use Case Diagram‏ الخاص بـV1‏.

‏وكذلك:

Scrum Master

‏مش Actor‏ مستقل.

‏لأن:

Mentor \= Scrum Master V1

‏48‏. الشكل المنطقي الكامل للـActors‏

‏لو هنجهز نفس الكلام بعد كده للرسم، أنا شايف تقسيم الـActor Layer‏ كده:

```
                     TechBridge
                          │
    ┌─────────────────────┼─────────────────────┐
    │                     │                     │
 Student               Mentor             Personal Monitor
    │                     │                     │
    │                     │                     │
    └─────────────────────┼─────────────────────┘
                          │
                        Admin
```

&nbsp;

External Systems: GitHub Payment Gateway (TBD) Google Meet

‏لكن الـ4‏ الأساسيين فقط هم:

Student Mentor / Specialist Personal Monitor Admin

‏وده مدعوم مباشرة من قسم Actors / User Roles‏ في FRS‏.

‏أهم نقطة قبل الرسم

‏الـUse Case Diagram‏ ماينفعش نحوله لقائمة 50‎+ Use Case‏ بشكل عشوائي.

‏من الملفات، نقدر نعمل hierarchy‏ منطقي:

Student ├── Account & Profile ├── Programs ├── Team ├── Project / Agile ├── GitHub ├── Code Review ├── Monitor Marketplace ├── Payments ├── Communication ├── Meetings ├── Portfolio & Certificate ├── Ratings └── RAG

Mentor ├── Account ├── Programs ├── Teams ├── Agile / Scrum ├── Simulated Client ├── GitHub ├── Code Review ├── Evaluation ├── Communication ├── Meetings ├── Dashboard ├── Ratings └── RAG

Personal Monitor ├── Account ├── Services ├── Bookings ├── Sessions ├── Development Plans ├── Payments / Payouts ├── Disputes ├── Communication ├── Meetings ├── Dashboard ├── Ratings └── RAG

Admin ├── Approvals ├── Users ├── Programs ├── Payments ├── Commission ├── Disputes ├── Quality ├── Reports └── Access / Privacy

External ├── GitHub ├── Payment Gateway └── Google Meet
