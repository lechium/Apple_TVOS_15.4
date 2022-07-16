//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFSoftwareVersion.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSString;

@interface HMDAccessoryVersion : HMFSoftwareVersion <NSCopying, NSSecureCoding>
{
    NSString *_rawVersionString;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000899887
- (void).cxx_destruct;	// IMP=0x0000000000899874
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000899800
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000899765
@property(readonly, copy, nonatomic) NSString *rawVersionString; // @synthesize rawVersionString=_rawVersionString;
- (id)initWithVersionString:(id)arg1;	// IMP=0x00000000008995f3

@end
