//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCoder.h>

@class MSVSegmentedCodingPackage, NSArray, NSDictionary;

@interface MSVSegmentedDecoder : NSCoder
{
    MSVSegmentedCodingPackage *_package;	// 8 = 0x8
    Class _rootClass;	// 16 = 0x10
    NSArray *_subcoders;	// 24 = 0x18
    NSDictionary *_userInfo;	// 32 = 0x20
}

+ (id)decodedObjectOfClasses:(id)arg1 fromPackage:(id)arg2 userInfo:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000009bbc
+ (id)decodedObjectOfClasses:(id)arg1 fromPackage:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000009ba4
+ (id)decodedObjectOfClass:(Class)arg1 fromPackage:(id)arg2 userInfo:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000009aec
+ (id)decodedObjectOfClass:(Class)arg1 fromPackage:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000009ad4
- (void).cxx_destruct;	// IMP=0x0000000000009a1f
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSArray *subcoders; // @synthesize subcoders=_subcoders;
@property(retain, nonatomic) Class rootClass; // @synthesize rootClass=_rootClass;
@property(retain, nonatomic) MSVSegmentedCodingPackage *package; // @synthesize package=_package;
- (id)_coderForKey:(id)arg1;	// IMP=0x0000000000009818
- (void)msv_setUserInfo:(id)arg1;	// IMP=0x00000000000096a0
- (id)msv_userInfo;	// IMP=0x000000000000967f
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long *)arg2;	// IMP=0x00000000000094fa
- (double)decodeDoubleForKey:(id)arg1;	// IMP=0x000000000000947d
- (float)decodeFloatForKey:(id)arg1;	// IMP=0x0000000000009400
- (long long)decodeInt64ForKey:(id)arg1;	// IMP=0x000000000000938f
- (int)decodeInt32ForKey:(id)arg1;	// IMP=0x000000000000931e
- (int)decodeIntForKey:(id)arg1;	// IMP=0x00000000000092ad
- (_Bool)decodeBoolForKey:(id)arg1;	// IMP=0x000000000000923c
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000000909f
- (_Bool)containsValueForKey:(id)arg1;	// IMP=0x000000000000906c
- (id)decodeRootObjectOfClasses:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000008ce3
- (id)initWithCodingPackage:(id)arg1 userInfo:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000089f6
- (id)initWithCodingPackage:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000089df

@end

