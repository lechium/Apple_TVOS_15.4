//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSString, NSURL;

@interface AXMPhotoAssetData : NSObject <NSSecureCoding>
{
    _Bool _allowNetworkAccess;	// 8 = 0x8
    unsigned int _assetOrientation;	// 12 = 0xc
    NSString *_assetLocalIdentifier;	// 16 = 0x10
    NSData *_assetImageData;	// 24 = 0x18
    NSString *_assetUTI;	// 32 = 0x20
    NSDate *_assetCreationDate;	// 40 = 0x28
    NSURL *_assetURL;	// 48 = 0x30
    long long _wellKnownPHPhotoLibraryIdentifier;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000022c79
- (void).cxx_destruct;	// IMP=0x0000000000023b68
@property(nonatomic) long long wellKnownPHPhotoLibraryIdentifier; // @synthesize wellKnownPHPhotoLibraryIdentifier=_wellKnownPHPhotoLibraryIdentifier;
@property(nonatomic) _Bool allowNetworkAccess; // @synthesize allowNetworkAccess=_allowNetworkAccess;
@property(nonatomic) unsigned int assetOrientation; // @synthesize assetOrientation=_assetOrientation;
@property(retain, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(retain, nonatomic) NSDate *assetCreationDate; // @synthesize assetCreationDate=_assetCreationDate;
@property(retain, nonatomic) NSString *assetUTI; // @synthesize assetUTI=_assetUTI;
@property(retain, nonatomic) NSData *assetImageData; // @synthesize assetImageData=_assetImageData;
@property(retain, nonatomic) NSString *assetLocalIdentifier; // @synthesize assetLocalIdentifier=_assetLocalIdentifier;
@property(readonly, nonatomic) unsigned int orientation;
@property(readonly, nonatomic) NSString *UTI;
@property(readonly, nonatomic) NSData *imageData;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) NSString *localIdentifier;
- (void)updateAssetDetails;	// IMP=0x000000000002328d
- (id)initWithImageAssetLocalIdentifier:(id)arg1 wellKnownPHPhotoLibraryIdentifier:(long long)arg2 allowsNetworkAccess:(_Bool)arg3;	// IMP=0x00000000000231e1
- (id)description;	// IMP=0x00000000000230a6
- (id)_photoAuthorizationMessage:(long long)arg1;	// IMP=0x0000000000023072
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000022ebb
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000022c81

@end

