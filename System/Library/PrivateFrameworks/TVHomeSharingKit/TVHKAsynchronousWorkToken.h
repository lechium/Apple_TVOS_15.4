//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperation;

@interface TVHKAsynchronousWorkToken : NSObject
{
    NSOperation *_operation;	// 8 = 0x8
}

+ (id)new;	// IMP=0x00000000000205db
- (void).cxx_destruct;	// IMP=0x000000000002073c
@property(retain, nonatomic) NSOperation *operation; // @synthesize operation=_operation;
- (void)cancel;	// IMP=0x00000000000206e4
- (id)initWithOperation:(id)arg1;	// IMP=0x0000000000020679
- (id)init;	// IMP=0x000000000002060a

@end

