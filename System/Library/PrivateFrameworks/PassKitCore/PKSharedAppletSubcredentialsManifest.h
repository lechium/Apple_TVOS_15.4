//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface PKSharedAppletSubcredentialsManifest : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_version;	// 16 = 0x10
    NSDictionary *_items;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001e777f
@property(readonly, nonatomic) NSDictionary *items; // @synthesize items=_items;
@property(readonly, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x00000000001e7713
@property(readonly, nonatomic) NSDictionary *sanitizedItems;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001e711e
- (id)initWithData:(id)arg1;	// IMP=0x00000000001e6f95
- (id)init;	// IMP=0x00000000001e6f87

@end

