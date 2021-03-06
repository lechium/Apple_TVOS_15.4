//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceShortcutClient/VCActionDonation-Protocol.h>

@class INShortcut, NSDate, NSString, NSUserActivity;

@interface VCUserActivityDonation : NSObject <VCActionDonation>
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_sourceAppIdentifier;	// 16 = 0x10
    NSDate *_date;	// 24 = 0x18
    INShortcut *_shortcut;	// 32 = 0x20
    NSDate *_endDate;	// 40 = 0x28
}

+ (id)timestampDateFormatter;	// IMP=0x0000000000008768
- (void).cxx_destruct;	// IMP=0x00000000000083b9
@property(readonly, copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) INShortcut *shortcut; // @synthesize shortcut=_shortcut;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, copy, nonatomic) NSString *sourceAppIdentifier; // @synthesize sourceAppIdentifier=_sourceAppIdentifier;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) id uniqueProperty;
@property(readonly, copy, nonatomic) NSString *suggestedPhrase;
@property(readonly, copy, nonatomic) NSString *fullDescription;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
- (id)dateString;	// IMP=0x0000000000007da1
@property(readonly, copy, nonatomic) NSString *sourceAppIdentifierForLaunching;
@property(readonly, copy, nonatomic) NSString *sourceAppIdentifierForDisplay;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000007c81
@property(readonly, nonatomic) NSUserActivity *userActivity;
- (id)initWithEvent:(id)arg1;	// IMP=0x00000000000073f3
- (id)initWithUserActivity:(id)arg1 identifier:(id)arg2 sourceAppIdentifier:(id)arg3 date:(id)arg4;	// IMP=0x0000000000007043

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

