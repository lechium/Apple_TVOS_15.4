//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SATimerTimerAction-Protocol.h>

@class NSArray, NSString;

@interface SATimerTimerShow <SATimerTimerAction>
{
}

+ (id)timerShowWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000322a8
+ (id)timerShow;	// IMP=0x0000000000032296
- (_Bool)requiresResponse;	// IMP=0x0000000000032312
@property(copy, nonatomic) NSArray *timerIds;
@property(copy, nonatomic) NSArray *actions;
- (id)encodedClassName;	// IMP=0x0000000000032289
- (id)groupIdentifier;	// IMP=0x0000000000032275

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
