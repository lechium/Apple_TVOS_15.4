//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface StockNewsItemCollection : NSObject
{
    NSArray *_newsItems;	// 8 = 0x8
    double _expirationTime;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001edf0
@property(nonatomic) double expirationTime; // @synthesize expirationTime=_expirationTime;
@property(retain, nonatomic) NSArray *newsItems; // @synthesize newsItems=_newsItems;
- (id)archiveArray;	// IMP=0x000000000001ec06
- (id)initWithArchiveArray:(id)arg1;	// IMP=0x000000000001e9b0

@end
