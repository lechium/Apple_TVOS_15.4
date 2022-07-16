//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActionKit/NSCoding-Protocol.h>

@class NSString;

@interface ENLinkedNotebookRef : NSObject <NSCoding>
{
    NSString *_guid;	// 8 = 0x8
    NSString *_noteStoreUrl;	// 16 = 0x10
    NSString *_shardId;	// 24 = 0x18
    NSString *_sharedNotebookGlobalId;	// 32 = 0x20
}

+ (id)linkedNotebookRefFromLinkedNotebook:(id)arg1;	// IMP=0x00000000001f1cbb
- (void).cxx_destruct;	// IMP=0x00000000001f1c7d
@property(retain, nonatomic) NSString *sharedNotebookGlobalId; // @synthesize sharedNotebookGlobalId=_sharedNotebookGlobalId;
@property(retain, nonatomic) NSString *shardId; // @synthesize shardId=_shardId;
@property(retain, nonatomic) NSString *noteStoreUrl; // @synthesize noteStoreUrl=_noteStoreUrl;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (unsigned long long)hash;	// IMP=0x00000000001f1b05
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001f172c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001f1614
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001f14d1

@end

