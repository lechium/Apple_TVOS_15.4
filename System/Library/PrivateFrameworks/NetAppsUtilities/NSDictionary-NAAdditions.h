//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (NAAdditions)
- (void)na_each:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001f76
- (_Bool)na_allSatisfy:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001e5f
- (_Bool)na_any:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001d48
- (id)na_dictionaryByMappingValues:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001bbd
- (id)na_filter:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001a26
- (id)na_reduceWithInitialValue:(id)arg1 reducer:(CDUnknownBlockType)arg2;	// IMP=0x0000000000001850
- (id)na_flatMap:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001718
- (id)na_map:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001590
- (id)na_firstKeyPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001304
@end

