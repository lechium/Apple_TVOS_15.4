//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDSCredentialLoader : NSObject
{
    CDUnknownBlockType _block;	// 8 = 0x8
    NSString *_uniqueID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000009782
@property(readonly, retain) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, retain) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
- (void)load;	// IMP=0x0010000000009754
- (id)initWithCommand:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000095b5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

