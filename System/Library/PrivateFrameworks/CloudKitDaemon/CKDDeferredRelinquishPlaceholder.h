//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKDZoneGatekeeperWaiter-Protocol.h>

@class NSString;

@interface CKDDeferredRelinquishPlaceholder : NSObject <CKDZoneGatekeeperWaiter>
{
    long long _qualityOfService;	// 8 = 0x8
    NSString *_underlyingCKShortDescription;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005e0a6
@property(readonly, nonatomic) NSString *underlyingCKShortDescription; // @synthesize underlyingCKShortDescription=_underlyingCKShortDescription;
@property(readonly, nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(readonly, copy) NSString *description;
- (id)ckShortDescription;	// IMP=0x000000000005df84
- (id)initWithExistingWaiter:(id)arg1;	// IMP=0x000000000005def0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

