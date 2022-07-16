//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserActivity/NSCopying-Protocol.h>
#import <UserActivity/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSFileHandle, NSString;

@interface UASharedPasteboardInfo : NSObject <NSSecureCoding, NSCopying>
{
    NSFileHandle *_dataFile;	// 8 = 0x8
    long long _dataSize;	// 16 = 0x10
    NSArray *_items;	// 24 = 0x18
    NSString *_sharedDataPath;	// 32 = 0x20
    NSDictionary *_sandboxExtensions;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000028247
- (void).cxx_destruct;	// IMP=0x0000000000028aaa
@property(copy) NSDictionary *sandboxExtensions; // @synthesize sandboxExtensions=_sandboxExtensions;
@property(copy) NSString *sharedDataPath; // @synthesize sharedDataPath=_sharedDataPath;
@property(copy) NSArray *items; // @synthesize items=_items;
@property long long dataSize; // @synthesize dataSize=_dataSize;
@property(retain) NSFileHandle *dataFile; // @synthesize dataFile=_dataFile;
- (id)description;	// IMP=0x0000000000028806
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000286c2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000285c8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002848c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002824f

@end

