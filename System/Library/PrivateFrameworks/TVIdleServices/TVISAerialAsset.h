//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVIdleServices/TVISScreenSaverAsset-Protocol.h>

@class NSDictionary, NSSet, NSString, NSURL;

@interface TVISAerialAsset : NSObject <TVISScreenSaverAsset>
{
    NSString *_identifier;	// 8 = 0x8
    NSURL *_localAssetURL;	// 16 = 0x10
    long long _mediaType;	// 24 = 0x18
    NSString *_shotID;	// 32 = 0x20
    NSSet *_categoryIDs;	// 40 = 0x28
    NSString *_accessibilityLabel;	// 48 = 0x30
    NSDictionary *_pointsOfInterest;	// 56 = 0x38
    long long _playOrder;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000001ec0
- (void).cxx_destruct;	// IMP=0x00000000000025a0
@property(readonly, nonatomic) long long playOrder; // @synthesize playOrder=_playOrder;
@property(readonly, nonatomic) NSDictionary *pointsOfInterest; // @synthesize pointsOfInterest=_pointsOfInterest;
@property(readonly, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(readonly, nonatomic) NSSet *categoryIDs; // @synthesize categoryIDs=_categoryIDs;
@property(readonly, nonatomic) NSString *shotID; // @synthesize shotID=_shotID;
@property(readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) NSURL *localAssetURL; // @synthesize localAssetURL=_localAssetURL;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000022d0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000001ee0
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000001b50
@property(readonly, copy) NSString *description;
- (id)initWithEntity:(id)arg1 downloadedFileURLs:(id)arg2;	// IMP=0x0000000000001630
- (id)_init;	// IMP=0x00000000000015a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

