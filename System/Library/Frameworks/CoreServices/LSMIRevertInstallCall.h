//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreServices/LSMIInstallCall-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface LSMIRevertInstallCall : NSObject <LSMIInstallCall>
{
    NSString *_bundleID;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000c5925
- (void).cxx_destruct;	// IMP=0x00000000000c5fd9
- (_Bool)validateEntitlementsOfConnection:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000c5b53
- (id)invokeWithOptions:(id)arg1 error:(id *)arg2 progressCallback:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c5adb
- (_Bool)isUninstall;	// IMP=0x00000000000c5ad3
- (id)bundleIdentifier;	// IMP=0x00000000000c5ac5
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c5a54
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c5a31
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c59a0
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x00000000000c592d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

