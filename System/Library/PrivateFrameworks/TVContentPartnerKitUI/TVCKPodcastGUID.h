//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVContentPartnerKitUI/NSSecureCoding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TVCKPodcastGUID : NSObject <NSSecureCoding>
{
    NSString *_guid;	// 8 = 0x8
    NSString *_episodeURL;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000022198
- (void).cxx_destruct;	// IMP=0x00000000000224a1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000223f3
- (id)description;	// IMP=0x00000000000223c6
@property(readonly, nonatomic) NSString *stringValue;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000221a0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002204c
- (id)initWithGUID:(id)arg1 episodeURL:(id)arg2;	// IMP=0x0000000000021f93
- (id)init;	// IMP=0x0000000000021f85

@end

