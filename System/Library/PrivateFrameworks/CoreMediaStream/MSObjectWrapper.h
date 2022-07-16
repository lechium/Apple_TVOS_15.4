//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol NSCoding, NSObject><NSCoding;

@interface MSObjectWrapper : NSObject
{
    long long _size;	// 8 = 0x8
    long long _uniqueID;	// 16 = 0x10
    id <NSObject><NSCoding> _object;	// 24 = 0x18
    int _errorCount;	// 32 = 0x20
}

+ (id)objectsFromWrappers:(id)arg1 equalToObject:(id)arg2;	// IMP=0x000000000003816e
+ (id)objectsFromWrappers:(id)arg1;	// IMP=0x0000000000037fa9
+ (long long)indexOfObject:(id)arg1 inWrapperArray:(id)arg2;	// IMP=0x0000000000037e90
+ (id)wrapperWithObject:(id)arg1 size:(long long)arg2;	// IMP=0x0000000000037e38
- (void).cxx_destruct;	// IMP=0x0000000000037e28
@property(nonatomic) int errorCount; // @synthesize errorCount=_errorCount;
@property(readonly, nonatomic) id <NSCoding> object; // @synthesize object=_object;
@property(nonatomic) long long uniqueID; // @synthesize uniqueID=_uniqueID;
@property(nonatomic) long long size; // @synthesize size=_size;
- (id)initWithObject:(id)arg1 size:(long long)arg2;	// IMP=0x0000000000037d6e

@end
