//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMSharedUtilities/NSSecureCoding-Protocol.h>

@class NSString;

@interface IMSandboxedResource : NSObject <NSSecureCoding>
{
    long long _sandboxExtensionHandle;	// 8 = 0x8
    id _resource;	// 16 = 0x10
    NSString *_sandboxExtension;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000af2a
+ (Class)resourceClass;	// IMP=0x000000000000abc0
- (void).cxx_destruct;	// IMP=0x000000000000af7c
@property(retain, nonatomic) NSString *sandboxExtension; // @synthesize sandboxExtension=_sandboxExtension;
@property(retain, nonatomic) id resource; // @synthesize resource=_resource;
@property(nonatomic) long long sandboxExtensionHandle; // @synthesize sandboxExtensionHandle=_sandboxExtensionHandle;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000ae54
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000ad10
- (char *)_sandboxExtensionForPID:(int)arg1;	// IMP=0x000000000000ac68
- (_Bool)accessResourceByConsumingSandboxExtensionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000aa5e
- (void)authorizeForPID:(int)arg1;	// IMP=0x000000000000a9df
- (void)dealloc;	// IMP=0x000000000000a998
- (id)description;	// IMP=0x000000000000a8f3

@end

