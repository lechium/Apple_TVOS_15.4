//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DDSAsset, NSDictionary, NSString, NSURL;

@interface DDSContentItem : NSObject
{
    DDSAsset *_parentAsset;	// 8 = 0x8
    NSDictionary *_contents;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000005dc3
@property(retain, nonatomic) NSDictionary *contents; // @synthesize contents=_contents;
@property(retain, nonatomic) DDSAsset *parentAsset; // @synthesize parentAsset=_parentAsset;
- (_Bool)isEqualToContentItem:(id)arg1;	// IMP=0x0000000000005caa
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000005c51
- (id)description;	// IMP=0x0000000000005b53
@property(readonly, nonatomic) NSDictionary *region;
@property(readonly, nonatomic) NSString *locale;
@property(readonly, nonatomic) NSString *type;
@property(readonly, nonatomic) NSString *fileName;
@property(readonly, nonatomic) NSURL *path;
- (id)init;	// IMP=0x000000000000591d
- (id)initWithParentAsset:(id)arg1 contents:(id)arg2;	// IMP=0x0000000000005884

@end

