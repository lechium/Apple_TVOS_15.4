//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface NSFileProviderKernelPartialFolderMaterializationInfo : NSObject <NSSecureCoding>
{
    NSString *fileName;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001d0613
@property(readonly) NSString *fileName; // @synthesize fileName;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001d0762
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001d06f3
- (void)dealloc;	// IMP=0x00000000001d0695
- (id)initWithFileName:(id)arg1;	// IMP=0x00000000001d061b

@end
