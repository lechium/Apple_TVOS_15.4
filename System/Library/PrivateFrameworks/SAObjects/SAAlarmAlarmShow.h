//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAlarmAlarmAction-Protocol.h>

@class NSArray, NSString;

@interface SAAlarmAlarmShow <SAAlarmAlarmAction>
{
}

+ (id)alarmShowWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000018c8f
+ (id)alarmShow;	// IMP=0x0000000000018c7d
@property(copy, nonatomic) NSArray *alarmIds;
- (id)encodedClassName;	// IMP=0x0000000000018c70
- (id)groupIdentifier;	// IMP=0x0000000000018c5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
