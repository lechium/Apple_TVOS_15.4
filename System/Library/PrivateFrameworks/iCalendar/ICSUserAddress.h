//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICSAlternateTimeProposal, ICSDateValue, NSString;

@interface ICSUserAddress
{
}

+ (id)ICSStringFromRole:(int)arg1;	// IMP=0x00000000000167e4
+ (id)ICSStringFromScheduleForceSend:(int)arg1;	// IMP=0x00000000000167c0
+ (id)ICSStringFromScheduleStatus:(int)arg1;	// IMP=0x0000000000016728
+ (id)ICSStringFromScheduleAgent:(int)arg1;	// IMP=0x0000000000016704
+ (id)ICSStringFromParticipationStatus:(int)arg1;	// IMP=0x0000000000016678
+ (id)ICSStringFromCalendarUser:(int)arg1;	// IMP=0x000000000001661c
+ (int)roleFromICSString:(id)arg1;	// IMP=0x0000000000016560
+ (int)scheduleForceSendFromICSString:(id)arg1;	// IMP=0x00000000000164f9
+ (int)scheduleAgentFromICSString:(id)arg1;	// IMP=0x0000000000016492
+ (int)scheduleStatusFromICSString:(id)arg1;	// IMP=0x0000000000016330
+ (int)participationStatusFromICSString:(id)arg1;	// IMP=0x00000000000161f4
+ (int)calendarUserFromICSString:(id)arg1;	// IMP=0x0000000000016138
+ (id)URLForNoMail;	// IMP=0x00000000000183b7
- (_Bool)shouldObscureValue;	// IMP=0x000000000001833b
- (id)parametersToObscure;	// IMP=0x0000000000018309
- (id)propertiesToObscure;	// IMP=0x0000000000018301
- (id)x_calendarserver_email;	// IMP=0x00000000000182ef
- (void)setX_calendarserver_email:(id)arg1;	// IMP=0x00000000000182dd
@property(nonatomic) ICSAlternateTimeProposal *alternateTimeProposal;
@property(retain, nonatomic) NSString *x_apple_inviterName;
@property(retain, nonatomic) NSString *likenessDataString;
@property(retain, nonatomic) NSString *x_apple_telephone;
@property(retain, nonatomic) NSString *email;
@property(nonatomic) _Bool x_apple_self_invited;
@property(retain, nonatomic) ICSDateValue *partstatModified;
@property(nonatomic) _Bool rsvp;
@property(nonatomic) int role;
@property(nonatomic) int scheduleforcesend;
@property(nonatomic) int scheduleagent;
@property(nonatomic) int schedulestatus;
@property(nonatomic) int partstat;
@property(retain, nonatomic) NSString *dir;
@property(nonatomic) int cutype;
@property(retain, nonatomic) NSString *cn;
- (id)displayName;	// IMP=0x0000000000017531
- (id)phoneNumber;	// IMP=0x0000000000017478
- (id)emailAddress;	// IMP=0x000000000001739a
- (_Bool)isPhoneNumber;	// IMP=0x0000000000017314
- (_Bool)hasPhoneNumber;	// IMP=0x00000000000172c9
- (_Bool)isHTTPSAddress;	// IMP=0x00000000000171fd
- (_Bool)isHTTPAddress;	// IMP=0x0000000000017131
- (_Bool)isEmailAddress;	// IMP=0x0000000000017065
- (_Bool)hasEmailAddress;	// IMP=0x000000000001701a
- (id)initWithPhoneNumber:(id)arg1;	// IMP=0x0000000000016db5
- (id)initWithEmailAddress:(id)arg1;	// IMP=0x0000000000016b2d
- (id)sanitizeAddressString:(id)arg1;	// IMP=0x00000000000168cc
- (id)initWithURL:(id)arg1;	// IMP=0x0000000000016840
- (void)fixAddress;	// IMP=0x0000000000012925
- (void)setURL:(id)arg1;	// IMP=0x0000000000018343

@end

