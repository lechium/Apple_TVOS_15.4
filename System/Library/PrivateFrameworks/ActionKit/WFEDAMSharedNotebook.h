//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActionKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface WFEDAMSharedNotebook : NSObject <NSSecureCoding>
{
    NSString *_notebookGuid;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000033644f
- (void).cxx_destruct;	// IMP=0x000000000033643f
@property(retain, nonatomic) NSString *notebookGuid; // @synthesize notebookGuid=_notebookGuid;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000033635a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003362e1

@end

