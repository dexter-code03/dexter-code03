<div align="center">

<img src="https://avatars.githubusercontent.com/u/87528915?v=4" width="120" style="border-radius:50%" />

# Vyom Krishna Gupta

**QA Engineer turned Platform Builder**

I started in quality engineering and stayed because I found the hardest engineering problems live there.
Making software *reliably testable* at scale — across real mobile devices, AI providers, and CI pipelines — is genuinely hard.
Most tools treat it as an afterthought. I build the ones that don't.

[![GitHub](https://img.shields.io/badge/GitHub-dexter--code03-181717?style=for-the-badge&logo=github&logoColor=white)](https://github.com/dexter-code03)
[![Email](https://img.shields.io/badge/Email-vyomgupta.rath%40gmail.com-EA4335?style=for-the-badge&logo=gmail&logoColor=white)](mailto:vyomgupta.rath@gmail.com)

</div>

---

## 🏗️ What I've Built

### 🔬 [QA OS](https://github.com/dexter-code03) — AI-Powered Mobile Test Automation Platform *(Private)*

> *The operating system for mobile QA teams. Describe a test in English. Run it on a real device. Ship with confidence.*

This is the most complex system I've built — a full-stack, production-grade platform that treats mobile testing as a first-class engineering problem. Currently distributed as a native macOS app (`QA OS-1.0.5-arm64`).

**Core Capabilities:**

| Module | What It Does |
|--------|-------------|
| 🤖 **AI Test Generation** | Describe what to test in plain English → Appium steps grounded in your real app XML. Supports Gemini, OpenAI, Anthropic |
| 📱 **Live Device Execution** | Runs on real Android + iOS devices via Appium 2 (UiAutomator2 / XCUITest) with video recording |
| 🧠 **AI Self-Healing** | When a step fails, AI diagnoses the root cause and patches the selector automatically |
| 📸 **Screen Library** | Captures XML snapshots of every app screen as grounding data — eliminates hallucinated selectors |
| 🕷️ **Flow Capture Engine** | AI-controlled app crawler that autonomously navigates your app and builds a screen library |
| 🐛 **Bug Tagger** | Classifies every failure into a root cause (selector not found, assertion failure, network error, design bug) |
| 🔄 **Jira Integration** | Bidirectional sync: push bug reports with screenshots, receive webhook status updates, auto-link test cases |
| 📄 **Confluence Sync** | Push formatted test status tables to Confluence with one click |
| 🎨 **Figma Integration** | Pull design flows and component names as AI test generation context |
| 🔌 **MCP Server** | Model Context Protocol endpoint — AI IDEs (Cursor, Claude Desktop, Copilot) can generate and fix tests using their own AI, no extra API key |
| 📊 **Reports & Analytics** | Suite health dashboards, fail streak tracking, pass rate trends, Recharts visualizations, HTML/CSV export |
| 📦 **Import/Export** | Katalon Studio, Gherkin/Cucumber, Python scripts, Excel sheets, Robot Framework, ZIP bundles |
| 🔑 **Data-Driven Testing** | `${variable}` syntax with DataSets, OTP auto-extraction from live API responses at runtime |
| 🛡️ **API Traffic Capture** | mitmproxy, Chucker (Android), Logcat, and Pulse (iOS) — intercepts network traffic during test runs |
| 🔬 **Object Repository** | Centralised selector library with screen associations and platform-specific aliases |
| ⚡ **Xray Integration** | Push test execution results to Xray for Jira test management |

**Stack:** `Python 3.11` · `FastAPI` · `SQLAlchemy` · `SQLite` · `React 18` · `TypeScript` · `Vite` · `Recharts` · `Appium 2` · `Gemini / OpenAI / Anthropic`

**Scale:** 35+ runner modules · 31 API router modules · 80+ endpoints · Full JWT auth with RBAC · Rate limiting · SSE real-time events

---

### 🚀 [Space Monkey](https://github.com/dexter-code03) — Full-Stack Video Streaming Platform *(Private)*

> *Live streaming + subscription billing + real-time analytics. OBS → RTMP → Vidking → your audience.*

A production-ready streaming platform with real RTMP ingest, Stripe subscriptions, and SSE-powered live dashboards.

**Features:**
- 🔴 Live streaming via OBS/Streamlabs → RTMP → Vidking SDK embed
- 💳 Stripe subscription billing — Cosmos ($49/mo) and Galaxy ($199/mo) plans
- 📡 Real-time analytics via SSE — live viewer counts and revenue every 2 seconds
- 🎬 VOD library with signed embed tokens
- 👤 NextAuth.js authentication (JWT mode)

**Stack:** `Node.js` · `Express` · `TypeScript` · `Next.js 14 (App Router)` · `PostgreSQL` · `Prisma ORM` · `NextAuth.js` · `Stripe` · `Vidking SDK` · `Docker Compose`

---

### 🤖 [PM AI Tool](https://github.com/dexter-code03/pm-ai-tool) — AI Product Intelligence Platform

> *From product idea to structured PRD in one click. Multi-provider AI with live model auto-detection.*

A product management platform where AI writes and maintains your PRDs.

**Features:**
- 📝 AI PRD generation from product ideas — OpenAI, Gemini, and Anthropic Claude support
- 🔗 Auto-detects model IDs live via provider APIs (OpenAI `/v1/models`, Gemini `v1beta/models`, Anthropic `/v1/models`)
- 📋 Full PRD CRUD dashboard: create, edit, regenerate, version
- 🎨 Figma + Jira integration for design and project context

**Stack:** `Vite` · `React` · `TypeScript` · `Tailwind CSS` · `Node.js (ESM)` · `FastAPI` · `Python`

---

### 🛒 [ecommerce-app](https://github.com/dexter-code03/ecommerce-app) — Full-Stack E-Commerce Platform

A complete e-commerce application with a Java Spring Boot backend and a Vite + React frontend.

**Stack:** `Java` · `Spring Boot` · `Maven` · `React` · `Vite` · `TypeScript` · `Docker Compose`

---

### 📊 [REACT-JS](https://github.com/dexter-code03/REACT-JS) — React Zero to Advanced

A structured learning repo documenting my React journey from fundamentals to advanced patterns.
`⭐ 1 star`

**Stack:** `React` · `JavaScript`

---

### ☕ [JAVA-DEV](https://github.com/dexter-code03/JAVA-DEV) — Java Backend Development

Learning Java backend with Spring ecosystem. Covers core Java, OOP patterns, and backend fundamentals.

**Stack:** `Java`

---

### 🔢 [DSA](https://github.com/dexter-code03/DSA) — Data Structures & Algorithms

Problem-solving repo — competitive programming challenges and algorithmic practice.

**Stack:** `C++`

---

### 🎮 Mini Projects (JavaScript / HTML / CSS)

| Project | What It Is | Stack |
|---------|-----------|-------|
| [Tic-Tac-Toe](https://github.com/dexter-code03/Tic-Tac-Toe) | Classic two-player game with win detection | `JavaScript` · `HTML` · `CSS` |
| [Weather-Project](https://github.com/dexter-code03/Weather-Project) | Live weather data from weather API by city search | `JavaScript` · `HTML` |
| [Password-Generator](https://github.com/dexter-code03/Password-Generator) | Configurable secure password generator | `JavaScript` · `HTML` |
| [Random-color-generator](https://github.com/dexter-code03/Random-color-generator) | Hex color generator with clipboard copy | `HTML` · `JavaScript` |
| [Dev-detective-Project](https://github.com/dexter-code03/Dev-detective-Project) | GitHub profile lookup tool using GitHub API | `CSS` · `JavaScript` |

---

### 🧪 Professional QA Work *(Private / Org)*

Beyond code, I've run QA for production fintech and consumer apps:

- **Wallet Regression Suite** — 8 sprints of P0 regression coverage for a mobile payments product, built in Katalon Studio with Groovy. Structured object repository, profile-based environments, full test suite hierarchy.
- **PCC Test Plan** — Comprehensive test planning documentation (`104KB` PRD analysis → structured test cases) for a complex multi-module platform.
- **Sprint-Integrated Proof** — Evidence collection and traceability from test execution to Jira/Xray, across multiple sprint cycles.

---

## 🛠️ Tech Stack

<div align="center">

**Languages**

![Python](https://img.shields.io/badge/Python-3776AB?style=flat-square&logo=python&logoColor=white)
![TypeScript](https://img.shields.io/badge/TypeScript-3178C6?style=flat-square&logo=typescript&logoColor=white)
![JavaScript](https://img.shields.io/badge/JavaScript-F7DF1E?style=flat-square&logo=javascript&logoColor=black)
![Java](https://img.shields.io/badge/Java-ED8B00?style=flat-square&logo=openjdk&logoColor=white)
![C++](https://img.shields.io/badge/C++-00599C?style=flat-square&logo=cplusplus&logoColor=white)
![Groovy](https://img.shields.io/badge/Groovy-4298B8?style=flat-square&logo=apache-groovy&logoColor=white)

**Backend**

![FastAPI](https://img.shields.io/badge/FastAPI-009688?style=flat-square&logo=fastapi&logoColor=white)
![Node.js](https://img.shields.io/badge/Node.js-339933?style=flat-square&logo=nodedotjs&logoColor=white)
![Express](https://img.shields.io/badge/Express-000000?style=flat-square&logo=express&logoColor=white)
![Spring Boot](https://img.shields.io/badge/Spring_Boot-6DB33F?style=flat-square&logo=springboot&logoColor=white)

**Frontend**

![React](https://img.shields.io/badge/React-61DAFB?style=flat-square&logo=react&logoColor=black)
![Next.js](https://img.shields.io/badge/Next.js-000000?style=flat-square&logo=nextdotjs&logoColor=white)
![Vite](https://img.shields.io/badge/Vite-646CFF?style=flat-square&logo=vite&logoColor=white)
![Tailwind](https://img.shields.io/badge/Tailwind-06B6D4?style=flat-square&logo=tailwindcss&logoColor=white)

**Mobile Testing**

![Appium](https://img.shields.io/badge/Appium-662D91?style=flat-square&logo=appium&logoColor=white)
![Android](https://img.shields.io/badge/Android-3DDC84?style=flat-square&logo=android&logoColor=white)
![iOS](https://img.shields.io/badge/iOS-000000?style=flat-square&logo=apple&logoColor=white)
![Katalon](https://img.shields.io/badge/Katalon-50BE87?style=flat-square&logoColor=white)

**AI / LLMs**

![Gemini](https://img.shields.io/badge/Gemini-8E75B2?style=flat-square&logo=google&logoColor=white)
![OpenAI](https://img.shields.io/badge/OpenAI-412991?style=flat-square&logo=openai&logoColor=white)
![Anthropic](https://img.shields.io/badge/Claude-191919?style=flat-square&logoColor=white)

**Databases & Infra**

![PostgreSQL](https://img.shields.io/badge/PostgreSQL-4169E1?style=flat-square&logo=postgresql&logoColor=white)
![SQLite](https://img.shields.io/badge/SQLite-003B57?style=flat-square&logo=sqlite&logoColor=white)
![Prisma](https://img.shields.io/badge/Prisma-2D3748?style=flat-square&logo=prisma&logoColor=white)
![Docker](https://img.shields.io/badge/Docker-2496ED?style=flat-square&logo=docker&logoColor=white)

**Integrations**

![Jira](https://img.shields.io/badge/Jira-0052CC?style=flat-square&logo=jira&logoColor=white)
![Confluence](https://img.shields.io/badge/Confluence-172B4D?style=flat-square&logo=confluence&logoColor=white)
![Figma](https://img.shields.io/badge/Figma-F24E1E?style=flat-square&logo=figma&logoColor=white)
![Stripe](https://img.shields.io/badge/Stripe-635BFF?style=flat-square&logo=stripe&logoColor=white)
![Xray](https://img.shields.io/badge/Xray-00AEF3?style=flat-square&logoColor=white)

</div>

---

## 📈 GitHub Stats

<div align="center">

![Vyom's GitHub stats](https://github-readme-stats.vercel.app/api?username=dexter-code03&show_icons=true&theme=tokyonight&hide_border=true&count_private=true)
&nbsp;&nbsp;
![Top Languages](https://github-readme-stats.vercel.app/api/top-langs/?username=dexter-code03&layout=compact&theme=tokyonight&hide_border=true)

</div>

---

## 💡 Currently Obsessed With

- **Cost-optimized AI in QA pipelines** — replacing expensive Vision AI calls with a 4-layer local validation cascade (SSIM + pHash + OpenCV → surgical AI crops only)
- **MCP as the next engineering interface** — making tools AI-native, not just AI-assisted
- **Grounded test generation** — real XML, real selectors, zero hallucinations

---

<div align="center">

*Always open to talk testing, AI tooling, or platform architecture.*

</div>
