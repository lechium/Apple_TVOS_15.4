//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreServices/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _LSBundleIdentifierAndType : NSObject <NSCopying>
{
    NSString *_bundleID;	// 8 = 0x8
    NSString *_type;	// 16 = 0x10
}

+ (id)createRepresentingRecord:(id)arg1;	// IMP=0x0000000000039ac3
+ (id)createRepresentingProxy:(id)arg1;	// IMP=0x0000000000039a61
- (void).cxx_destruct;	// IMP=0x0000000000039b8c
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000039a2e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003995b
- (unsigned long long)hash;	// IMP=0x0000000000039919
- (id)initWithBundleID:(id)arg1 type:(id)arg2;	// IMP=0x0000000000039880

@end

