//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ExtensionFoundation/NSSecureCoding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _EXSandboxExtension : NSObject <NSSecureCoding>
{
    unsigned long long _consumedSandboxExtension;	// 8 = 0x8
    NSString *_sandboxExtensionToken;	// 16 = 0x10
}

+ (_Bool)sandboxed;	// IMP=0x0000000000028dcd
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000028dc5
- (void).cxx_destruct;	// IMP=0x000000000002925f
@property(retain) NSString *sandboxExtensionToken; // @synthesize sandboxExtensionToken=_sandboxExtensionToken;
@property unsigned long long consumedSandboxExtension; // @synthesize consumedSandboxExtension=_consumedSandboxExtension;
- (_Bool)consume;	// IMP=0x000000000002905d
- (void)dealloc;	// IMP=0x000000000002901d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000028ffa
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000028f61
- (id)initWithExtensionClass:(id)arg1 machServiceName:(id)arg2 process:(CDStruct_4c969caf)arg3;	// IMP=0x0000000000028e55
- (id)init;	// IMP=0x0000000000028e19

@end
