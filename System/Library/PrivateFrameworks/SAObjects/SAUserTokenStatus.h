//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SABackgroundContextObject-Protocol.h>

@class NSNumber, NSString;

@interface SAUserTokenStatus <SABackgroundContextObject>
{
}

@property(copy, nonatomic) NSNumber *shouldExcludeFromBackgroundRefresh;
@property(copy, nonatomic) NSNumber *lastUpdateAttemptTime;
@property(copy, nonatomic) NSNumber *errorCode;
- (id)encodedClassName;	// IMP=0x0000000000040add
- (id)groupIdentifier;	// IMP=0x0000000000040ac9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

