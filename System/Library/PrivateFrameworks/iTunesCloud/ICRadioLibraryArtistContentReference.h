//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface ICRadioLibraryArtistContentReference <NSCopying, NSSecureCoding>
{
    NSString *_artistName;	// 8 = 0x8
    NSNumber *_representativeCloudIdentifier;	// 16 = 0x10
    NSNumber *_storeIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001920a
- (void).cxx_destruct;	// IMP=0x00000000000191c8
@property(copy, nonatomic) NSNumber *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(copy, nonatomic) NSNumber *representativeCloudIdentifier; // @synthesize representativeCloudIdentifier=_representativeCloudIdentifier;
@property(copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000190b9
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000018f91
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000018eca
- (id)rawContentDictionaryWithSubscriptionStatus:(id)arg1;	// IMP=0x0000000000018d82
- (id)matchDictionaryWithSubscriptionStatus:(id)arg1;	// IMP=0x0000000000018cc2
- (long long)contentType;	// IMP=0x0000000000018cb7

@end

