//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUICollectionConfiguration : NSObject
{
    _Bool _hideLockupTitles;	// 8 = 0x8
    long long _gridFilter;	// 16 = 0x10
    long long _gridStyle;	// 24 = 0x18
    long long _gridType;	// 32 = 0x20
    double _minimumLineSpacing;	// 40 = 0x28
}

@property(nonatomic) _Bool hideLockupTitles; // @synthesize hideLockupTitles=_hideLockupTitles;
@property(nonatomic) double minimumLineSpacing; // @synthesize minimumLineSpacing=_minimumLineSpacing;
@property(nonatomic) long long gridType; // @synthesize gridType=_gridType;
@property(nonatomic) long long gridStyle; // @synthesize gridStyle=_gridStyle;
@property(nonatomic) long long gridFilter; // @synthesize gridFilter=_gridFilter;

@end

