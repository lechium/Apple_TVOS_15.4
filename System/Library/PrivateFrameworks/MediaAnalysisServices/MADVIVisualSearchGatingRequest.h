//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLLocation, NSNumber, NSString, NSURL;

@interface MADVIVisualSearchGatingRequest
{
    NSNumber *_queryID;	// 8 = 0x8
    CLLocation *_location;	// 16 = 0x10
    NSURL *_imageURL;	// 24 = 0x18
    NSURL *_referralURL;	// 32 = 0x20
    NSNumber *_imageType;	// 40 = 0x28
    NSString *_featureIdentifier;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000001344
- (void).cxx_destruct;	// IMP=0x00000000000018d2
@property(copy, nonatomic) NSString *featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
@property(copy, nonatomic) NSNumber *imageType; // @synthesize imageType=_imageType;
@property(copy, nonatomic) NSURL *referralURL; // @synthesize referralURL=_referralURL;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSNumber *queryID; // @synthesize queryID=_queryID;
- (id)description;	// IMP=0x000000000000162a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000151f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000134c

@end

