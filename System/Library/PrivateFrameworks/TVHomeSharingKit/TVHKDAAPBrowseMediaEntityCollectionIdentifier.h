//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVHomeSharingKit/NSSecureCoding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TVHKDAAPBrowseMediaEntityCollectionIdentifier <NSSecureCoding>
{
    NSString *_browseTitle;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000a4671
- (void).cxx_destruct;	// IMP=0x00000000000a4b28
@property(copy, nonatomic) NSString *browseTitle; // @synthesize browseTitle=_browseTitle;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000a4a7c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a48ac
- (unsigned long long)hash;	// IMP=0x00000000000a47db
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a4742
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a4679
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a4666
- (id)initWithBrowseTitle:(id)arg1;	// IMP=0x00000000000a45ea
- (id)initWithProtocol:(unsigned long long)arg1;	// IMP=0x00000000000a457b

@end

