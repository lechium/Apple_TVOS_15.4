//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _TPSXPCExportedObjectProxy : NSObject
{
    id _weakExportedObject;	// 8 = 0x8
    Class _weakExportedObjectClass;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000055013
@property(retain, nonatomic) Class weakExportedObjectClass; // @synthesize weakExportedObjectClass=_weakExportedObjectClass;
@property(nonatomic) __weak id weakExportedObject; // @synthesize weakExportedObject=_weakExportedObject;
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000054f77
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000054ee0

@end

