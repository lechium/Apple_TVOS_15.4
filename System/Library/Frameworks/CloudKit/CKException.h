//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSException.h>

@interface CKException : NSException
{
}

- (id)error;	// IMP=0x00000000000391c0
@property(readonly, nonatomic) int errorCode;
- (id)initWithName:(id)arg1 format:(id)arg2 args:(struct __va_list_tag [1])arg3;	// IMP=0x0000000000039096
- (id)initWithName:(id)arg1 format:(id)arg2;	// IMP=0x0000000000038ffc
- (id)initWithCode:(int)arg1 format:(id)arg2 args:(struct __va_list_tag [1])arg3;	// IMP=0x0000000000038ec6
- (id)initWithCode:(int)arg1 format:(id)arg2;	// IMP=0x0000000000038e2c

@end
