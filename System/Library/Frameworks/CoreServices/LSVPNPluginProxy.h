//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreServices/NSSecureCoding-Protocol.h>

@interface LSVPNPluginProxy <NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000011bcea
+ (id)VPNPluginProxyForIdentifier:(id)arg1 withContext:(struct LSContext *)arg2;	// IMP=0x000000000011bc92
+ (id)VPNPluginProxyForIdentifier:(id)arg1;	// IMP=0x000000000011bbfc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000011bd21
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000011bcf2
- (id)_initWithBundleIdentifier:(id)arg1 withContext:(struct LSContext *)arg2;	// IMP=0x000000000011bb57

@end
