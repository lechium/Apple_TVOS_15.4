//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSString;

@interface NSArray (LibAppStoreDaemon)
- (id)lib_batchedWithMaxSize:(unsigned long long)arg1;	// IMP=0x00100000001c0371
- (id)lib_filterUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001c0129
- (id)lib_mapAndFilterUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001bffeb
- (id)lib_flatMapAndFilterUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001bfdbe
- (id)lib_firstResultApplyingTransform:(CDUnknownBlockType)arg1;	// IMP=0x00100000001bfc60
- (id)lib_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00100000001bfb91
- (id)lib_categorizeItemsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001bf8db
- (id)_tcr_associatedReader;	// IMP=0x00100000001e84a2
- (id)tcr_stringEnumerator;	// IMP=0x00100000001e8443
- (id)tcr_numberEnumerator;	// IMP=0x00100000001e83e4
- (id)tcr_dictionaryEnumerator;	// IMP=0x00100000001e8385
@property(readonly) NSString *tcr_keyPath;
@end
