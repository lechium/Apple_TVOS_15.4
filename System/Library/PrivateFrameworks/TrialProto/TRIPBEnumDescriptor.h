//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TRIPBEnumDescriptor : NSObject
{
    NSString *name_;	// 8 = 0x8
    const char *valueNames_;	// 16 = 0x10
    const int *values_;	// 24 = 0x18
    CDUnknownFunctionPointerType enumVerifier_;	// 32 = 0x20
    const char *extraTextFormatInfo_;	// 40 = 0x28
    unsigned int *nameOffsets_;	// 48 = 0x30
    unsigned int valueCount_;	// 56 = 0x38
}

+ (id)allocDescriptorForName:(id)arg1 valueNames:(const char *)arg2 values:(const int *)arg3 count:(unsigned int)arg4 enumVerifier:(CDUnknownFunctionPointerType)arg5 extraTextFormatInfo:(const char *)arg6;	// IMP=0x000000000001ab05
+ (id)allocDescriptorForName:(id)arg1 valueNames:(const char *)arg2 values:(const int *)arg3 count:(unsigned int)arg4 enumVerifier:(CDUnknownFunctionPointerType)arg5;	// IMP=0x000000000001aac5
@property(readonly, nonatomic) CDUnknownFunctionPointerType enumVerifier; // @synthesize enumVerifier=enumVerifier_;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=name_;
- (id)textFormatNameForValue:(int)arg1;	// IMP=0x000000000001aeaa
- (_Bool)getValue:(int *)arg1 forEnumTextFormatName:(id)arg2;	// IMP=0x000000000001ade3
- (_Bool)getValue:(int *)arg1 forEnumName:(id)arg2;	// IMP=0x000000000001accc
- (id)enumNameForValue:(int)arg1;	// IMP=0x000000000001ac55
- (void)calcValueNameOffsets;	// IMP=0x000000000001abf8
- (void)dealloc;	// IMP=0x000000000001abaf
- (id)initWithName:(id)arg1 valueNames:(const char *)arg2 values:(const int *)arg3 count:(unsigned int)arg4 enumVerifier:(CDUnknownFunctionPointerType)arg5;	// IMP=0x000000000001ab2f

@end

