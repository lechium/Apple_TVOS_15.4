//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface TUMomentDescriptor : NSObject <NSSecureCoding>
{
    NSString *_photosAssetIdentifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000523cc
- (void).cxx_destruct;	// IMP=0x00000000000523de
@property(readonly, copy, nonatomic) NSString *photosAssetIdentifier; // @synthesize photosAssetIdentifier=_photosAssetIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005233e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000052293
- (id)description;	// IMP=0x00000000000521ec
@property(readonly, nonatomic) NSURL *photoViewingAppURL;
- (id)init;	// IMP=0x00000000000520ce
- (id)initWithPhotosAppAssetIdentifier:(id)arg1;	// IMP=0x0000000000052063

@end

