//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSString;

@interface NSData (CLDeepCopying)
- (id)cl_deepCopy;	// IMP=0x00200000004ac294
- (id)cl_hexadecimalString;	// IMP=0x0010000000519fc2
- (id)_cl_initWithFileDescriptor:(int)arg1;	// IMP=0x00100000006548ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

