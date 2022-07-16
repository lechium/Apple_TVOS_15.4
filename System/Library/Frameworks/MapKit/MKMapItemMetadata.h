//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOBusiness, NSMutableDictionary;

@interface MKMapItemMetadata : NSObject
{
    GEOBusiness *_business;	// 8 = 0x8
    NSMutableDictionary *_imageCache;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000104eac
@property(retain, nonatomic) NSMutableDictionary *imageCache; // @synthesize imageCache=_imageCache;
@property(readonly, nonatomic) GEOBusiness *business; // @synthesize business=_business;
- (id)imageForURL:(id)arg1;	// IMP=0x0000000000104e0e
- (void)addImage:(id)arg1 forURL:(id)arg2;	// IMP=0x0000000000104d7c
- (id)description;	// IMP=0x0000000000104cb7
- (id)initWithBusiness:(id)arg1;	// IMP=0x0000000000104c39

@end
