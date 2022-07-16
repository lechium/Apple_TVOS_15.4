//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCoder.h>

#import <MediaServices/MSVSegmentedSubDecoder-Protocol.h>

@class NSArray, NSDictionary, NSMapTable, NSMutableArray, NSString;

@interface MSVOPACKDecoder : NSCoder <MSVSegmentedSubDecoder>
{
    NSArray *_objects;	// 8 = 0x8
    NSMapTable *_objectLookupTable;	// 16 = 0x10
    NSMutableArray *_wrapperStack;	// 24 = 0x18
    NSDictionary *_userInfo;	// 32 = 0x20
}

+ (id)decodedObjectOfClasses:(id)arg1 fromData:(id)arg2 userInfo:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000262c4
+ (id)decodedObjectOfClasses:(id)arg1 fromData:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000262ac
+ (id)decodedObjectOfClass:(Class)arg1 fromData:(id)arg2 userInfo:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000261f4
+ (id)decodedObjectOfClass:(Class)arg1 fromData:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000261dc
- (void).cxx_destruct;	// IMP=0x0000000000026023
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) NSMutableArray *wrapperStack; // @synthesize wrapperStack=_wrapperStack;
@property(readonly, nonatomic) NSMapTable *objectLookupTable; // @synthesize objectLookupTable=_objectLookupTable;
@property(readonly, nonatomic) NSArray *objects; // @synthesize objects=_objects;
- (id)_decodeNumberForKey:(id)arg1;	// IMP=0x0000000000025ea2
- (void)msv_setUserInfo:(id)arg1;	// IMP=0x0000000000025e6e
- (id)msv_userInfo;	// IMP=0x0000000000025e4d
- (void)finishDecodingPartialTopLevelObject;	// IMP=0x0000000000025e30
- (void)beginDecodingPartialTopLevelObjectOfClasses:(id)arg1;	// IMP=0x0000000000025c99
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long *)arg2;	// IMP=0x0000000000025ba7
- (double)decodeDoubleForKey:(id)arg1;	// IMP=0x0000000000025b57
- (float)decodeFloatForKey:(id)arg1;	// IMP=0x0000000000025b07
- (long long)decodeInt64ForKey:(id)arg1;	// IMP=0x0000000000025ac3
- (int)decodeInt32ForKey:(id)arg1;	// IMP=0x0000000000025a7f
- (int)decodeIntForKey:(id)arg1;	// IMP=0x0000000000025a3b
- (_Bool)decodeBoolForKey:(id)arg1;	// IMP=0x0000000000025978
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000257c9
- (id)_decodeOPACKObject:(id)arg1 ofClasses:(id)arg2;	// IMP=0x0000000000024772
- (void)_validateClass:(Class)arg1 fromSupportedClasses:(id)arg2;	// IMP=0x00000000000245f6
- (id)decodeRootObjectOfClasses:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000245da
- (_Bool)containsValueForKey:(id)arg1;	// IMP=0x0000000000024518
- (_Bool)allowsKeyedCoding;	// IMP=0x0000000000024510
- (_Bool)requiresSecureCoding;	// IMP=0x0000000000024508
- (id)initForReadingFromData:(id)arg1 userInfo:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000241dc
- (id)initForReadingFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000241c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
