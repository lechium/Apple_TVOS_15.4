//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface MPMediaBooklet : NSObject
{
    unsigned long long itemPersistentID;	// 8 = 0x8
    NSString *name;	// 16 = 0x10
    long long storeItemID;	// 24 = 0x18
    NSString *redownloadParams;	// 32 = 0x20
    long long fileSize;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000016a91d
@property(nonatomic) long long fileSize; // @synthesize fileSize;
@property(copy, nonatomic) NSString *redownloadParams; // @synthesize redownloadParams;
@property(nonatomic) long long storeItemID; // @synthesize storeItemID;
@property(copy, nonatomic) NSString *name; // @synthesize name;
@property(nonatomic) unsigned long long itemPersistentID; // @synthesize itemPersistentID;
- (id)description;	// IMP=0x000000000016a816

@end

