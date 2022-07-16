//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <LocationSupport/CLIntersiloServiceProtocol-Protocol.h>

@class NSString;

@interface _Locationd : NSObject <CLIntersiloServiceProtocol>
{
    _Bool _valid;	// 8 = 0x8
}

+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00000000000166bc
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00000000000164e8
+ (id)getSilo;	// IMP=0x00000000000164e0
+ (_Bool)isSupported;	// IMP=0x00000000000164d8
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
