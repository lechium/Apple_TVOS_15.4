//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString;

@interface SAReminderDateTimeTriggerOffset <SAAceSerializable>
{
}

+ (id)dateTimeTriggerOffsetWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000001c407
+ (id)dateTimeTriggerOffset;	// IMP=0x000000000001c3f5
@property(copy, nonatomic) NSNumber *offsetValue;
@property(copy, nonatomic) NSString *offsetTimeUnit;
- (id)encodedClassName;	// IMP=0x000000000001c3e8
- (id)groupIdentifier;	// IMP=0x000000000001c3d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

