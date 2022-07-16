//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSString;

@interface HMDNetworkRouterControlOperation : NSObject <NSCopying, HAPTLVProtocol>
{
    long long _operation;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004b6d61
@property(nonatomic) long long operation; // @synthesize operation=_operation;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004b6c39
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004b6be8
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004b6bce
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004b6a72
- (id)initWithOperation:(long long)arg1;	// IMP=0x00000000004b6a35
- (id)init;	// IMP=0x00000000004b69f9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
