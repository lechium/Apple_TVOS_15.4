//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface CRLatticeResults : NSObject
{
    NSMutableArray *_mutableResults;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000106d46
@property(retain, nonatomic) NSMutableArray *mutableResults; // @synthesize mutableResults=_mutableResults;
@property(readonly, nonatomic) NSArray *results;
- (void)addResult:(id)arg1;	// IMP=0x0000000000106cbb
- (id)init;	// IMP=0x0000000000106c37

@end

