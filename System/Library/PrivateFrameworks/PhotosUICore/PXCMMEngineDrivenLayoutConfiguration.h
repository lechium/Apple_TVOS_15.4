//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PXCMMEngineDrivenLayoutConfiguration : NSObject
{
    long long _layoutType;	// 8 = 0x8
    double _headerHeight;	// 16 = 0x10
    double _bannerHeight;	// 24 = 0x18
    double _statusFooterHeight;	// 32 = 0x20
    double _sendBackFooterHeight;	// 40 = 0x28
}

@property(nonatomic) double sendBackFooterHeight; // @synthesize sendBackFooterHeight=_sendBackFooterHeight;
@property(nonatomic) double statusFooterHeight; // @synthesize statusFooterHeight=_statusFooterHeight;
@property(nonatomic) double bannerHeight; // @synthesize bannerHeight=_bannerHeight;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(nonatomic) long long layoutType; // @synthesize layoutType=_layoutType;

@end
