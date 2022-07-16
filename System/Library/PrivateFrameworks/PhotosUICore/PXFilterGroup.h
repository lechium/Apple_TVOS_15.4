//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface PXFilterGroup : NSObject <NSCopying>
{
    NSString *_name;	// 8 = 0x8
    NSArray *_filterIdentifiers;	// 16 = 0x10
}

+ (id)groupWithName:(id)arg1 filterIdentifiers:(id)arg2;	// IMP=0x000000000062f16e
- (void).cxx_destruct;	// IMP=0x000000000062f146
@property(readonly, copy, nonatomic) NSArray *filterIdentifiers; // @synthesize filterIdentifiers=_filterIdentifiers;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000062ef7c
- (unsigned long long)hash;	// IMP=0x000000000062edf0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000062ede5
- (id)initWithName:(id)arg1 filterIdentifiers:(id)arg2;	// IMP=0x000000000062ecb2
- (id)init;	// IMP=0x000000000062ec38

@end

