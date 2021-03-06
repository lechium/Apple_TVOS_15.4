//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOTextItemContainer-Protocol.h>

@class NSArray;
@protocol GEOTextItemDisplayConfig;

@interface GEOTextItemContainer : NSObject <GEOTextItemContainer>
{
    id <GEOTextItemDisplayConfig> _displayConfig;	// 8 = 0x8
    NSArray *_textItems;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000001200fb3
@property(readonly, nonatomic) NSArray *textItems; // @synthesize textItems=_textItems;
@property(readonly, nonatomic) id <GEOTextItemDisplayConfig> displayConfig; // @synthesize displayConfig=_displayConfig;
- (id)initWithTextItemContainer:(id)arg1;	// IMP=0x0000000001200cb4
- (id)initWithDisplayConfig:(id)arg1 textItems:(id)arg2;	// IMP=0x0000000001200c09
- (id)init;	// IMP=0x0000000001200bdf

@end

