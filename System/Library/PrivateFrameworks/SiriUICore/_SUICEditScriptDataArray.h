//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriUICore/_SUICEditScriptData-Protocol.h>

@class NSArray, NSString;

@interface _SUICEditScriptDataArray : NSObject <_SUICEditScriptData>
{
    NSArray *_data;	// 8 = 0x8
    NSString *_cachedStringValue;	// 16 = 0x10
}

+ (id)EditScriptDataWithArray:(id)arg1;	// IMP=0x000000000000d266
+ (id)EditScriptDataWithString:(id)arg1 chunkSize:(long long)arg2;	// IMP=0x000000000000d20a
- (void).cxx_destruct;	// IMP=0x000000000000d655
@property(retain, nonatomic) NSString *cachedStringValue; // @synthesize cachedStringValue=_cachedStringValue;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
- (long long)indexOfFirstDifferenceWithOtherData:(id)arg1 shouldReverseIterate:(_Bool)arg2 fallsOnWordBoundary:(_Bool *)arg3;	// IMP=0x000000000000d3e6
- (long long)characterIndexForItem:(long long)arg1;	// IMP=0x000000000000d390
- (long long)lengthOfItem:(long long)arg1;	// IMP=0x000000000000d348
- (id)stringValue;	// IMP=0x000000000000d2df
- (id)stringAtIndex:(long long)arg1;	// IMP=0x000000000000d2c9
- (long long)length;	// IMP=0x000000000000d2b3
@property(readonly, copy) NSString *description;
- (id)initWithArray:(id)arg1;	// IMP=0x000000000000d181
- (id)initWithString:(id)arg1 chunkSize:(long long)arg2;	// IMP=0x000000000000cd51

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

