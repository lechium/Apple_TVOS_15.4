//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DialogEngine/DEWriter-Protocol.h>

@class NSData;

@interface DEVersionWriter : NSObject <DEWriter>
{
    NSData *_version;	// 8 = 0x8
    struct CC_SHA256state_st _context;	// 16 = 0x10
}

+ (_Bool)prepareDirsFor:(id)arg1;	// IMP=0x000000000026d4a0
+ (id)getURLFor:(id)arg1 version:(id)arg2 base:(id)arg3;	// IMP=0x000000000026d1f6
+ (id)versionFile:(id)arg1;	// IMP=0x000000000026d115
+ (id)versionToString:(id)arg1;	// IMP=0x000000000026d016
+ (id)versionString:(id)arg1;	// IMP=0x000000000026cf97
+ (id)versionData:(id)arg1;	// IMP=0x000000000026ceee
+ (id)dataWithHexString:(id)arg1;	// IMP=0x000000000026ccd4
- (void).cxx_destruct;	// IMP=0x000000000026d829
@property(nonatomic) struct CC_SHA256state_st context; // @synthesize context=_context;
@property(retain, nonatomic) NSData *version; // @synthesize version=_version;
- (void)close;	// IMP=0x000000000026d6fc
- (void)writeData:(id)arg1;	// IMP=0x000000000026d677
- (id)init;	// IMP=0x000000000026d5ed

@end
