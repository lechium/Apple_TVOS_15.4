//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PXViewSpec;

@interface PXBasicTileUserData : NSObject
{
    PXViewSpec *_viewSpec;	// 8 = 0x8
}

+ (id)userDataWithViewSpec:(id)arg1;	// IMP=0x000000000014f61e
- (void).cxx_destruct;	// IMP=0x000000000014f60e
@property(readonly, nonatomic) PXViewSpec *viewSpec; // @synthesize viewSpec=_viewSpec;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000014f52c
- (unsigned long long)hash;	// IMP=0x000000000014f4e8
- (id)_initWithViewSpec:(id)arg1;	// IMP=0x000000000014f47d
- (id)init;	// IMP=0x000000000014f469

@end

