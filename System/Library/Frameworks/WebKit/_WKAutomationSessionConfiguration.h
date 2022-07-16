//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/NSCopying-Protocol.h>

@interface _WKAutomationSessionConfiguration : NSObject <NSCopying>
{
    _Bool _acceptInsecureCertificates;	// 8 = 0x8
    _Bool _allowsInsecureMediaCapture;	// 9 = 0x9
    _Bool _suppressesICECandidateFiltering;	// 10 = 0xa
}

@property(nonatomic) _Bool suppressesICECandidateFiltering; // @synthesize suppressesICECandidateFiltering=_suppressesICECandidateFiltering;
@property(nonatomic) _Bool allowsInsecureMediaCapture; // @synthesize allowsInsecureMediaCapture=_allowsInsecureMediaCapture;
@property(nonatomic) _Bool acceptInsecureCertificates; // @synthesize acceptInsecureCertificates=_acceptInsecureCertificates;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000279395
- (id)init;	// IMP=0x0000000000279357

@end
