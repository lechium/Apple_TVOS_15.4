//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;

__attribute__((visibility("hidden")))
@interface LPThemeParametersObserver : NSObject
{
    NSHashTable *_clients;	// 8 = 0x8
}

+ (id)shared;	// IMP=0x000000000003c759
- (void).cxx_destruct;	// IMP=0x000000000003ca2d
- (void)didChangeThemeParameters;	// IMP=0x000000000003c8c6
- (void)addClient:(id)arg1;	// IMP=0x000000000003c81d
- (void)didChangeDarkenColorsStatus:(id)arg1;	// IMP=0x000000000003c80b
- (void)dealloc;	// IMP=0x000000000003c796
- (id)init;	// IMP=0x000000000003c6b3

@end

